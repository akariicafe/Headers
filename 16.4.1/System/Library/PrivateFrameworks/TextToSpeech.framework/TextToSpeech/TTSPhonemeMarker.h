@class NSString;

@interface TTSPhonemeMarker : NSObject <TTSMarker>

@property (retain, nonatomic) NSString *phoneme;
@property (nonatomic) long long alphabet;
@property (readonly, nonatomic) long long markType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
