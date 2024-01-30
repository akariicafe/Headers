@class NSString, NSArray;

@interface MPRadioRecentStationsGroup : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *localizedTitle;
@property (copy, nonatomic) NSArray *stations;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
