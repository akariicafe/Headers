@class NSString;

@interface _ATXActionMetaData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *actionKey;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) BOOL shouldPredict;
@property (readonly, nonatomic) BOOL shouldPredictLockScreen;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 shouldPredict:(BOOL)a2 shouldPredictLockScreen:(BOOL)a3 actionKey:(id)a4;

@end
