@class NSString;

@interface SMSAttachmentPart : NSObject

@property (readonly, retain, nonatomic) NSString *contentLocation;

- (void)dealloc;
- (id)initWithContentLocation:(id)a0;

@end
