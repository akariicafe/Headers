@class NSArray, NSNumber;

@interface PKFelicaShinkansenTicket : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *trains;
@property (readonly, copy, nonatomic) NSNumber *validityStartDate;
@property (readonly, copy, nonatomic) NSNumber *validityTerm;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
