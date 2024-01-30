@class NSDate;
@protocol WBReusableTab;

@interface WBReusableTabEntry : NSObject

@property (readonly, nonatomic) id<WBReusableTab> reusableTab;
@property (readonly, nonatomic) NSDate *dateCreated;

- (void).cxx_destruct;
- (id)initWithReusableTab:(id)a0;

@end
