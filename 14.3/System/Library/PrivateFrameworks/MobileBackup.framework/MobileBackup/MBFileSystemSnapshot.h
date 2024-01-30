@class NSString, NSDate;

@interface MBFileSystemSnapshot : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSDate *creationDate;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 uuid:(id)a1 creationDate:(id)a2;
- (id)description;

@end
