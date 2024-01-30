@class NSString, NSArray;

@interface _HMUserSettingEntry : HMFObject

@property (readonly, nonatomic) NSString *keyPath;
@property (readonly, nonatomic) NSArray *constraints;

- (void).cxx_destruct;
- (id)initWithKeyPath:(id)a0 constraintArray:(id)a1;

@end
