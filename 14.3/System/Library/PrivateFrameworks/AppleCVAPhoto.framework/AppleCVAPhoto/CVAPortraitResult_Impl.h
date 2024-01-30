@class NSString;
@protocol CVAMattingResult;

@interface CVAPortraitResult_Impl : NSObject <CVAPortraitResult>

@property (readonly) id<CVAMattingResult> mattingResult;
@property (readonly) struct __CVBuffer { } *portraitPixelBuffer;
@property (readonly) float portraitStability;
@property (readonly) float relightingStability;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
