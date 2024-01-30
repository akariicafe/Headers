@class NSString;
@protocol CACVoiceOverDescribable;

@interface CACVoiceOverItemShortDescriptionPair : NSObject

@property (retain, nonatomic) id<CACVoiceOverDescribable> item;
@property (retain, nonatomic) NSString *shortDescription;

- (void).cxx_destruct;

@end
