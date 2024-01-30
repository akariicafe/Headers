@class NSString;

@interface AMSSQLitePreparedStatement : NSObject

@property (readonly, nonatomic) const void *connectionPointer;
@property (readonly, copy, nonatomic) NSString *SQL;

- (id)initWithConnection:(const void *)a0 SQL:(id)a1;
- (void).cxx_destruct;

@end
