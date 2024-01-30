@class NSString;

@interface AMSSQLitePreparedStatement : NSObject

@property (readonly, nonatomic) const void *connectionPointer;
@property (readonly, copy, nonatomic) NSString *SQL;

- (void).cxx_destruct;
- (id)initWithConnection:(const void *)a0 SQL:(id)a1;

@end
