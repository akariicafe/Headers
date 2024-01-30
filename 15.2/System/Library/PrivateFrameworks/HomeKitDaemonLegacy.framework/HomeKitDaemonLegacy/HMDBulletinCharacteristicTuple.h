@class NSString, NSNumber, NSDate;

@interface HMDBulletinCharacteristicTuple : HMFObject

@property (retain, nonatomic) NSDate *lastPostingTime;
@property (readonly, nonatomic) NSString *serviceContextID;
@property (readonly, nonatomic) NSString *currentType;
@property (readonly, nonatomic) id targetValue;
@property (readonly, nonatomic) NSNumber *targetStateNumber;
@property (readonly, nonatomic) BOOL changedByThisDevice;

+ (id)tupleWithServiceContextID:(id)a0 currentType:(id)a1 targetValue:(id)a2 targetStateNumber:(id)a3 changedByThisDevice:(BOOL)a4;

- (void).cxx_destruct;
- (id)initWithServiceContextID:(id)a0 currentType:(id)a1 targetValue:(id)a2 targetStateNumber:(id)a3 changedByThisDevice:(BOOL)a4;
- (void)updatePostingTime;

@end
