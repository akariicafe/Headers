@class NSString, NSArray;

@interface IAMMessage : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *messageGroupIdentifier;
@property (readonly, nonatomic) NSArray *contentPages;
@property (readonly, nonatomic) BOOL requiresCloseButton;

- (id)initWithICInAppMessageEntry:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 messageGroupIdentifier:(id)a1 contentPages:(id)a2 requiresCloseButton:(BOOL)a3;

@end
