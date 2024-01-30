@interface ENTApplicationException : ENTException {
    int _type;
}

+ (id)read:(id)a0;
+ (id)exceptionWithType:(int)a0 reason:(id)a1;

- (void)write:(id)a0;
- (id)initWithType:(int)a0 reason:(id)a1;

@end
