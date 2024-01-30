@class NSNumber, NSString;

@interface WFTTSPause : NSObject <WFTTSStringAnnotation, WFTTSStringComponent>

@property (readonly, nonatomic) NSNumber *seconds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parseAnnotationString:(id)a0;

@end
