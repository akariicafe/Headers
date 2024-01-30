@class UIImage, NSAttributedString;

@interface EKDayOccurrenceContentPayload : NSObject

@property (readonly, nonatomic) long long requestId;
@property (readonly, nonatomic) unsigned long long requestOptions;
@property (readonly, nonatomic) UIImage *backgroundImage;
@property (readonly, nonatomic) UIImage *textImage;
@property (readonly, nonatomic) UIImage *travelTimeImage;
@property (readonly, nonatomic) NSAttributedString *travelTimeString;

- (id)initWithRequestId:(long long)a0 requestOptions:(unsigned long long)a1 backgroundImage:(id)a2 textImage:(id)a3 travelTimeImage:(id)a4 travelTimeString:(id)a5;
- (void).cxx_destruct;

@end
