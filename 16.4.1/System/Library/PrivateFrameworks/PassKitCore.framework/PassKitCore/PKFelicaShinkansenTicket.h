@class NSArray, NSNumber;

@interface PKFelicaShinkansenTicket : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *trains;
@property (readonly, copy, nonatomic) NSNumber *validityStartDate;
@property (readonly, copy, nonatomic) NSNumber *validityTerm;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
