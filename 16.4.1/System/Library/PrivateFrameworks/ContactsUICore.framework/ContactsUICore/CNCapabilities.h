@class NSString;

@interface CNCapabilities : NSObject <CNCapabilities>

@property (readonly, nonatomic) BOOL areTelephonyCallsSupported;
@property (readonly, nonatomic) BOOL isiMessageSupported;
@property (readonly, nonatomic) BOOL isFaceTimeVideoSupported;
@property (readonly, nonatomic) BOOL isFaceTimeAudioSupported;
@property (readonly, nonatomic) BOOL isPaySupported;
@property (readonly, nonatomic) BOOL isExpanseSupported;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldUseLegacyMessages;


@end
