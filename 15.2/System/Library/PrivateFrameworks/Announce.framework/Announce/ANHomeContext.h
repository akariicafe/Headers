@class NSString, NSArray;

@interface ANHomeContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *homeName;
@property (retain, nonatomic) NSArray *zoneNames;
@property (retain, nonatomic) NSArray *roomNames;
@property (nonatomic) BOOL isEmpty;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
