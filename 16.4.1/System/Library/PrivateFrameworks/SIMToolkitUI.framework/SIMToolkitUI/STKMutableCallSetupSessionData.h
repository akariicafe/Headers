@class NSString;

@interface STKMutableCallSetupSessionData : STKCallSetupSessionData

@property (copy, nonatomic) NSString *phoneNumber;
@property (nonatomic) BOOL isHighPriority;

- (void)setPhoneNumber:(id)a0;
- (void)setIsHighPriority:(BOOL)a0;

@end
