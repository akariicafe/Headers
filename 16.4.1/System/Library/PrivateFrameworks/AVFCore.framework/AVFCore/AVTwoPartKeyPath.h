@class NSString;

@interface AVTwoPartKeyPath : NSObject <AVKeyPath, NSCopying>

@property (readonly, nonatomic) NSString *topLevelPropertyKey;
@property (readonly, nonatomic) NSString *secondLevelPropertyKey;
@property (readonly, nonatomic) NSString *keyPathString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTopLevelPropertyKey:(id)a0 secondLevelPropertyKey:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
