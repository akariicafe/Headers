@class NSSet;

@interface ATXDisplayIdentifiers : NSObject

@property (class, readonly, nonatomic) NSSet *allIdentifiers;
@property (class, readonly, nonatomic) NSSet *appIdentifiers;

+ (BOOL)isWidgetOrWebClipIdentifier:(id)a0;

@end
