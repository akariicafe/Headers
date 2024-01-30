@class NSString;

@interface TTSWordMarker : NSObject <TTSMarker>

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } wordRange;
@property (readonly, nonatomic) long long markType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
