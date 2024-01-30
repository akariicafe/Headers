@class CLSEvent;

@interface CLSEventResult : NSObject

@property (retain, nonatomic) CLSEvent *event;
@property (nonatomic) float confidence;

+ (id)eventResultWithEvent:(id)a0 andConfidence:(float)a1;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isSameEventAsResult:(id)a0;
- (void)mergeWithResult:(id)a0;

@end
