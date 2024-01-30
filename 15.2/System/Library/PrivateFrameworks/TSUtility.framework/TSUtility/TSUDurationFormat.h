@class NSString;

@interface TSUDurationFormat : NSObject <NSCopying, TSUDataFormat> {
    NSString *mFormat;
    NSString *mName;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)formatWithFormat:(id)a0 name:(id)a1;

- (id)format;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithFormat:(id)a0 name:(id)a1;
- (id)formatName;
- (void)setFormatName:(id)a0;

@end
