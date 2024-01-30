@interface ABDowntimeWhitelistMigrator : NSObject

+ (id)externalRepresentationFromUnknownProperties:(id)a0;
+ (BOOL)moveDowntimeWhitelistFromUnknownProperties:(struct CPSqliteConnection { struct CPSqliteDatabase *x0; struct sqlite3 *x1; struct __CFDictionary *x2; struct __CFDictionary *x3; void *x4; void /* function */ *x5; void /* function */ *x6; void *x7; unsigned int x8; BOOL x9; } *)a0;
+ (id)unknownPropertiesFromExternalRepresentation:(id)a0;

@end
