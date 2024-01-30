@class NSString, NSDictionary;

@interface CKMessagesComplicationDataContext : NSObject

@property (nonatomic) long long family;
@property (nonatomic) unsigned long long unreadCount;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } backgroundFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } imageFrame;
@property (copy, nonatomic) NSString *bubbleText;
@property (nonatomic) struct CGPoint { double x; double y; } bubbleTextOrigin;
@property (retain, nonatomic) NSDictionary *textAttributes;

- (id)init;
- (void).cxx_destruct;
- (id)initWithUnreadCount:(unsigned long long)a0 family:(long long)a1 template:(id)a2 specs:(id)a3;

@end
