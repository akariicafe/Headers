@interface BMPublicStreamUtilities : NSObject

+ (id)streamIdentifiers;
+ (long long)streamForStreamIdentifier:(id)a0;
+ (id)streamIdentifierForStream:(long long)a0;
+ (BOOL)writeAllowedForStream:(long long)a0 processIdentifier:(id)a1;
+ (unsigned long long)domainForStream:(long long)a0;
+ (id)allowedStreamWriteIdentifiersForStream:(long long)a0;

@end
