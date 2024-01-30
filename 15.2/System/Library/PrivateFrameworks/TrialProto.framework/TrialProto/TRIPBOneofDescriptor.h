@class NSString, NSArray;

@interface TRIPBOneofDescriptor : NSObject {
    const char *name_;
    SEL caseSel_;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *fields;

- (id)fieldWithName:(id)a0;
- (id)fieldWithNumber:(unsigned int)a0;
- (void)dealloc;
- (id)initWithName:(const char *)a0 fields:(id)a1;

@end
