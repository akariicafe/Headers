@class NSString, NSData;

@interface IMCommSafetySummaryImage : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSData *imageData;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 imageData:(id)a1;

@end
