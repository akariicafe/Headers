@class TRIPBFileDescriptor, NSString, NSArray;

@interface TRIPBDescriptor : NSObject <NSCopying> {
    unsigned int storageSize_;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *fields;
@property (readonly, nonatomic) NSArray *oneofs;
@property (readonly, nonatomic) const struct TRIPBExtensionRange { unsigned int x0; unsigned int x1; } *extensionRanges;
@property (readonly, nonatomic) unsigned int extensionRangesCount;
@property (readonly, nonatomic) TRIPBFileDescriptor *file;
@property (readonly, nonatomic, getter=isWireFormat) BOOL wireFormat;
@property (readonly, nonatomic) Class messageClass;
@property (readonly) TRIPBDescriptor *containingType;
@property (readonly) NSString *fullName;

+ (id)allocDescriptorForClass:(Class)a0 rootClass:(Class)a1 file:(id)a2 fields:(void *)a3 fieldCount:(unsigned int)a4 storageSize:(unsigned int)a5 flags:(unsigned int)a6;

- (void)setupExtraTextInfo:(const char *)a0;
- (void)setupMessageClassNameSuffix:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)setupContainingMessageClassName:(const char *)a0;
- (id)fieldWithName:(id)a0;
- (id)fieldWithNumber:(unsigned int)a0;
- (id)initWithClass:(Class)a0 file:(id)a1 fields:(id)a2 storageSize:(unsigned int)a3 wireFormat:(BOOL)a4;
- (void)setupExtensionRanges:(const struct TRIPBExtensionRange { unsigned int x0; unsigned int x1; } *)a0 count:(int)a1;
- (void)setupOneofs:(const char **)a0 count:(unsigned int)a1 firstHasIndex:(int)a2;
- (id)oneofWithName:(id)a0;

@end
