@class SBKTransaction;

@interface SBKRequestData : NSObject

@property (retain, nonatomic) SBKTransaction *transaction;

+ (id)propertyListBodyWithTransaction:(id)a0;

- (id)initWithTransaction:(id)a0;
- (void).cxx_destruct;
- (id)serializableRequestBodyPropertyList;

@end
