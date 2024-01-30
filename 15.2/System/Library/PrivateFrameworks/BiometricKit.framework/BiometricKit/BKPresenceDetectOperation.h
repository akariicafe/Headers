@interface BKPresenceDetectOperation : BKOperation

@property (nonatomic) long long priority;

- (void)startBioOperation:(BOOL)a0 reply:(id /* block */)a1;
- (id)optionsDictionaryWithError:(id *)a0;

@end
