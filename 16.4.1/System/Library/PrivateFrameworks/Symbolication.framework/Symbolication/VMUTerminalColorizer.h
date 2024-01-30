@interface VMUTerminalColorizer : NSObject

+ (id)colorize:(id)a0 withColor:(unsigned int)a1 bold:(BOOL)a2;
+ (id)controlCodeResetString;
+ (id)startColorCodeString:(unsigned int)a0;

@end
