@class NSString, NSArray;

@interface ANHomeContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *homeName;
@property (retain, nonatomic) NSArray *zoneNames;
@property (retain, nonatomic) NSArray *roomNames;
@property (nonatomic) BOOL isEmpty;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
