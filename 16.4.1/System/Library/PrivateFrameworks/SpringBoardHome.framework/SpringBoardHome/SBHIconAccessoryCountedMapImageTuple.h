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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)initWithImage:(id)a0 countedMapKey:(id)a1;
- (id)initWithImage:(id)a0 countedMapKey:(id)a1 hash:(unsigned long long)a2;
- (void).cxx_destruct;

@end
