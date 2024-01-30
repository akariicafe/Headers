@class MPRemoteCommandHandlerDialog, MRSendCommandResultStatus, NSData, NSError, NSString;

@interface MPRemoteCommandStatus : NSObject <NSCopying> {
    MPRemoteCommandHandlerDialog *_dialog;
}

@property (class, readonly, nonatomic) MPRemoteCommandStatus *successStatus;

@property (readonly, copy, nonatomic) MRSendCommandResultStatus *mediaRemoteType;
@property (readonly, nonatomic) long long statusCode;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) MPRemoteCommandHandlerDialog *dialog;
@property (readonly, copy, nonatomic) NSError *error;
@property (readonly, copy, nonatomic) NSData *customData;
@property (readonly, copy, nonatomic) NSString *customDataType;

+ (id)statusWithCode:(long long)a0 customData:(id)a1 type:(id)a2;
+ (id)statusWithCode:(long long)a0;
+ (id)statusWithCode:(long long)a0 dialog:(id)a1;
+ (id)statusWithCode:(long long)a0 error:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)analyticSignature;
- (id)initWithMediaRemoteType:(id)a0;

@end
