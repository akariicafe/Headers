@interface IDSPendingOfflineMessageResponse : IDSMessage <NSCopying>

- (long long)command;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)messageBody;

@end
