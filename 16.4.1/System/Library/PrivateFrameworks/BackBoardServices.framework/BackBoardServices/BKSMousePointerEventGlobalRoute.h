@class NSString, BKSMousePointerGlobalContextOptions;

@interface BKSMousePointerEventGlobalRoute : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, BSDescriptionStreamable> {
    unsigned int _contextID;
    BKSMousePointerGlobalContextOptions *_options;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int contextID;
@property (readonly, nonatomic) BKSMousePointerGlobalContextOptions *options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)build:(id /* block */)a0;
+ (id)new;

- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
