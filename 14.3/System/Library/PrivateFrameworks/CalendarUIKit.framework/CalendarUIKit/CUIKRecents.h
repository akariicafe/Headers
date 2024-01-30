@interface CUIKRecents : NSObject

+ (id)locationForRecent:(id)a0;
+ (BOOL)recentIsDirectoryLocation:(id)a0;
+ (BOOL)recentDirectoryLocation:(id)a0 matchesSource:(id)a1;
+ (id)recentForLocation:(id)a0 withAddressString:(id)a1 andTitle:(id)a2;
+ (id)recentForDirectoryLocation:(id)a0 onSource:(id)a1;
+ (id)directoryLocationForRecent:(id)a0 onSource:(id)a1;

@end
