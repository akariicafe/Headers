@class NSString, NSNumber;

@interface HDTinkerPairedUserInfo : NSObject

@property (retain, nonatomic) NSString *firstName;
@property (retain, nonatomic) NSString *lastName;
@property (retain, nonatomic) NSNumber *dsid;

- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
