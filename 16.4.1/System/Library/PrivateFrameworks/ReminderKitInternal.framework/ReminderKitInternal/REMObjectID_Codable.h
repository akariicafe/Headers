@interface REMObjectID_Codable : REMObjectID

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)initWithUUID:(id)a0 entityName:(id)a1;

@end
