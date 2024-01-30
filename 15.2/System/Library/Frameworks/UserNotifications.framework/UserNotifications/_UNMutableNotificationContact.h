@class NSString;

@interface _UNMutableNotificationContact : _UNNotificationContact

@property (copy, nonatomic) NSString *handle;
@property (nonatomic) long long handleType;
@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *displayName;
@property (nonatomic, getter=isDisplayNameSuggested) BOOL displayNameSuggested;
@property (copy, nonatomic) NSString *customIdentifier;
@property (copy, nonatomic) NSString *cnContactIdentifier;
@property (copy, nonatomic) NSString *cnContactFullname;
@property (nonatomic, getter=isCNContactIdentifierSuggested) BOOL cnContactIdentifierSuggested;

- (void)setCustomIdentifier:(id)a0;
- (void)setHandle:(id)a0;
- (void)setCnContactIdentifier:(id)a0;
- (void)setServiceName:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setHandleType:(long long)a0;
- (void)setDisplayName:(id)a0;
- (void)setCnContactFullname:(id)a0;
- (void)setDisplayNameSuggested:(BOOL)a0;
- (void)setCnContactIdentifierSuggested:(BOOL)a0;

@end
