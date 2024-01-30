@class NSString, NSArray;

@interface HomeEntity : INObject

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSString *entityName;
@property (nonatomic) long long type;
@property (nonatomic, copy) NSString *entityIdentifier;
@property (nonatomic, copy) NSArray *deviceTypes;
@property (nonatomic) long long sceneType;
@property (nonatomic, copy) NSString *room;
@property (nonatomic, copy) NSString *home;
@property (nonatomic, copy) NSString *group;
@property (nonatomic, copy) NSArray *zones;

- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;

@end
