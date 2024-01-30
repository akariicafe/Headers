@interface VoiceDialLastNameDataSource : VoiceDialNameDataSource

- (unsigned long long)indexOfMainNameOfType:(int)a0;
- (unsigned long long)personNameCount;
- (BOOL)getName:(id *)a0 phoneticName:(id *)a1 atIndex:(unsigned long long)a2 forPerson:(void *)a3;
- (int)typeOfNameAtIndex:(unsigned long long)a0;

@end
