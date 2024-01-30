@interface ENTException : NSException

+ (id)exceptionWithName:(id)a0 reason:(id)a1;
+ (id)exceptionWithName:(id)a0 reason:(id)a1 error:(id)a2;
+ (id)exceptionWithName:(id)a0;

- (id)description;

@end
