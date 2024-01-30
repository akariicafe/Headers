@class NSString, MPCPlaybackAccount;

@interface _MPCQCBMSessionTypeInfo : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) MPCPlaybackAccount *account;
@property (nonatomic) BOOL supported;
@property (copy, nonatomic) NSString *supportedReason;
@property (nonatomic) BOOL exportable;
@property (copy, nonatomic) NSString *exportableReason;

+ (id)infoWithIdentifier:(id)a0 account:(id)a1 supported:(BOOL)a2 supportedReason:(id)a3 exportable:(BOOL)a4 exportableReason:(id)a5;

- (void).cxx_destruct;

@end
