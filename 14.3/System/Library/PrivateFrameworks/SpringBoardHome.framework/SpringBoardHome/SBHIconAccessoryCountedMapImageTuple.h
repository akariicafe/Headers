@class UIImage, NSString;
@protocol NSCopying, NSObject;

@interface SBHIconAccessoryCountedMapImageTuple : NSObject <SBCountedMapValue> {
    unsigned long long _hash;
}

@property (readonly, nonatomic) UIImage *image;
@property (readonly, copy, nonatomic) id<NSCopying, NSObject> sbh_countedMapKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithImage:(id)a0 countedMapKey:(id)a1 hash:(unsigned long long)a2;
- (id)initWithImage:(id)a0 countedMapKey:(id)a1;
- (BOOL)isEqual:(id)a0;

@end
