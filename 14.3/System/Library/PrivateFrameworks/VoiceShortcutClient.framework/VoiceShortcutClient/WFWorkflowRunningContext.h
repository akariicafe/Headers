@class NSString, NSData, NSDate;

@interface WFWorkflowRunningContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *workflowIdentifier;
@property (retain, nonatomic) NSDate *creationDate;
@property (readonly, copy, nonatomic) NSString *progressCategory;
@property (nonatomic) BOOL isShortcutsApp;
@property (retain, nonatomic) NSData *serializedWorkflowControllerState;
@property (nonatomic) BOOL allowDialogNotifications;
@property (retain, nonatomic) NSString *automationType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithWorkflowIdentifier:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)addProgressSubscriberUsingPublishingHandler:(id /* block */)a0;
- (id)progressForPublishingWithTotalUnitCount:(long long)a0 cancellationHandler:(id /* block */)a1;
- (void)removeProgressSubscriber:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
