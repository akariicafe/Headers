@interface CRComponentAuth : NSObject

- (long long)convertIORegDataToStatus:(id)a0 authPass:(id)a1;
- (long long)copyComponentStatusForQuery:(id)a0;
- (long long)synchronouslycopyAuthStatusForQuery:(id)a0;
- (BOOL)isFirstAuthCompleteForQuery:(id)a0;

@end
