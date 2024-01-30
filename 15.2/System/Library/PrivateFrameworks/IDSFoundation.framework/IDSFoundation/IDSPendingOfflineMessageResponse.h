@interface IDSPendingOfflineMessageResponse : IDSMessage <NSCopying>

- (long long)command;
- (id)messageBody;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
