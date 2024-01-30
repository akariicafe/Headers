@class SBKTransaction;

@interface SBKRequestData : NSObject

@property (retain, nonatomic) SBKTransaction *transaction;

+ (id)propertyListBodyWithTransaction:(id)a0;

- (void).cxx_destruct;
- (id)initWithTransaction:(id)a0;
- (id)serializableRequestBodyPropertyList;

@end
