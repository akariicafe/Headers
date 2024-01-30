@interface CNDateComponentsEquivalence : NSObject

+ (BOOL)isComponent:(long long)a0 equivalentToComponent:(long long)a1;
+ (BOOL)isCalendar:(id)a0 equivalentToCalendar:(id)a1;
+ (BOOL)canUnifyComponents:(id)a0 withComponents:(id)a1;

@end
