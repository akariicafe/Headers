@interface NSTextGraphicsContextProvider : NSObject

@property (class, readonly) BOOL textGraphicsContextProviderClassRespondsToColorQuery;
@property (class, readonly) Class __defaultColorClass;
@property (class) Class textGraphicsContextProviderClass;
@property (class) Class textGraphicsContextClass;

+ (void)setCurrentTextGraphicsContext:(id)a0 duringBlock:(id /* block */)a1;

@end
